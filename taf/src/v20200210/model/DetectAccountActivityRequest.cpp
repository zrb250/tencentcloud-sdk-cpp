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

#include <tencentcloud/taf/v20200210/model/DetectAccountActivityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

DetectAccountActivityRequest::DetectAccountActivityRequest() :
    m_businessSecurityDataHasBeenSet(false)
{
}

string DetectAccountActivityRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessSecurityDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessSecurityData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_businessSecurityData.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputDetectAccountActivity DetectAccountActivityRequest::GetBusinessSecurityData() const
{
    return m_businessSecurityData;
}

void DetectAccountActivityRequest::SetBusinessSecurityData(const InputDetectAccountActivity& _businessSecurityData)
{
    m_businessSecurityData = _businessSecurityData;
    m_businessSecurityDataHasBeenSet = true;
}

bool DetectAccountActivityRequest::BusinessSecurityDataHasBeenSet() const
{
    return m_businessSecurityDataHasBeenSet;
}

