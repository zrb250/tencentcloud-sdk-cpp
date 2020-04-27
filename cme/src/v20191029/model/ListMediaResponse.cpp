/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/cme/v20191029/model/ListMediaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ListMediaResponse::ListMediaResponse() :
    m_materialTotalCountHasBeenSet(false),
    m_materialInfoSetHasBeenSet(false),
    m_classInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome ListMediaResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MaterialTotalCount") && !rsp["MaterialTotalCount"].IsNull())
    {
        if (!rsp["MaterialTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MaterialTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_materialTotalCount = rsp["MaterialTotalCount"].GetInt64();
        m_materialTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("MaterialInfoSet") && !rsp["MaterialInfoSet"].IsNull())
    {
        if (!rsp["MaterialInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `MaterialInfoSet` is not array type"));

        const Value &tmpValue = rsp["MaterialInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaterialInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_materialInfoSet.push_back(item);
        }
        m_materialInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("ClassInfoSet") && !rsp["ClassInfoSet"].IsNull())
    {
        if (!rsp["ClassInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `ClassInfoSet` is not array type"));

        const Value &tmpValue = rsp["ClassInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClassInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classInfoSet.push_back(item);
        }
        m_classInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t ListMediaResponse::GetMaterialTotalCount() const
{
    return m_materialTotalCount;
}

bool ListMediaResponse::MaterialTotalCountHasBeenSet() const
{
    return m_materialTotalCountHasBeenSet;
}

vector<MaterialInfo> ListMediaResponse::GetMaterialInfoSet() const
{
    return m_materialInfoSet;
}

bool ListMediaResponse::MaterialInfoSetHasBeenSet() const
{
    return m_materialInfoSetHasBeenSet;
}

vector<ClassInfo> ListMediaResponse::GetClassInfoSet() const
{
    return m_classInfoSet;
}

bool ListMediaResponse::ClassInfoSetHasBeenSet() const
{
    return m_classInfoSetHasBeenSet;
}

