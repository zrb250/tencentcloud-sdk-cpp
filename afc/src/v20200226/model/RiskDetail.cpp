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

#include <tencentcloud/afc/v20200226/model/RiskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace rapidjson;
using namespace std;

RiskDetail::RiskDetail() :
    m_riskCodeHasBeenSet(false)
{
}

CoreInternalOutcome RiskDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskCode") && !value["RiskCode"].IsNull())
    {
        if (!value["RiskCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RiskDetail.RiskCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCode = value["RiskCode"].GetUint64();
        m_riskCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_riskCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RiskCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCode, allocator);
    }

}


uint64_t RiskDetail::GetRiskCode() const
{
    return m_riskCode;
}

void RiskDetail::SetRiskCode(const uint64_t& _riskCode)
{
    m_riskCode = _riskCode;
    m_riskCodeHasBeenSet = true;
}

bool RiskDetail::RiskCodeHasBeenSet() const
{
    return m_riskCodeHasBeenSet;
}

