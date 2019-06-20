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

#include <tencentcloud/tag/v20180813/model/TagWithDelete.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace rapidjson;
using namespace std;

TagWithDelete::TagWithDelete() :
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_canDeleteHasBeenSet(false)
{
}

CoreInternalOutcome TagWithDelete::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `TagWithDelete.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `TagWithDelete.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TagWithDelete.CanDelete` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetUint64();
        m_canDeleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagWithDelete::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tagKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_canDeleteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CanDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDelete, allocator);
    }

}


string TagWithDelete::GetTagKey() const
{
    return m_tagKey;
}

void TagWithDelete::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool TagWithDelete::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string TagWithDelete::GetTagValue() const
{
    return m_tagValue;
}

void TagWithDelete::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagWithDelete::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

uint64_t TagWithDelete::GetCanDelete() const
{
    return m_canDelete;
}

void TagWithDelete::SetCanDelete(const uint64_t& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool TagWithDelete::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

