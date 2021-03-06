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

#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

RegionInfo::RegionInfo() :
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_regionCodeHasBeenSet(false)
{
}

CoreInternalOutcome RegionInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionInfo.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RegionInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegionInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

}


string RegionInfo::GetRegion() const
{
    return m_region;
}

void RegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RegionInfo::GetRegionName() const
{
    return m_regionName;
}

void RegionInfo::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool RegionInfo::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t RegionInfo::GetRegionId() const
{
    return m_regionId;
}

void RegionInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool RegionInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string RegionInfo::GetRegionCode() const
{
    return m_regionCode;
}

void RegionInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool RegionInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

