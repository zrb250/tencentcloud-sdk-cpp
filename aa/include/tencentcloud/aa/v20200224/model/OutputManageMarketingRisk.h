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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTMANAGEMARKETINGRISK_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTMANAGEMARKETINGRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aa/v20200224/model/OutputManageMarketingRiskValue.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * 影响风控出参
                */
                class OutputManageMarketingRisk : public AbstractModel
                {
                public:
                    OutputManageMarketingRisk();
                    ~OutputManageMarketingRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回码。0表示成功，非0标识失败错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 返回码。0表示成功，非0标识失败错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置返回码。0表示成功，非0标识失败错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code 返回码。0表示成功，非0标识失败错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取UTF-8编码，出错消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message UTF-8编码，出错消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置UTF-8编码，出错消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message UTF-8编码，出错消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取业务详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 业务详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputManageMarketingRiskValue GetValue() const;

                    /**
                     * 设置业务详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 业务详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const OutputManageMarketingRiskValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 返回码。0表示成功，非0标识失败错误码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * UTF-8编码，出错消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 业务详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OutputManageMarketingRiskValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTMANAGEMARKETINGRISK_H_
