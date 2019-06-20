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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_TAG_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 资源类型及标签键值对
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签键
                     * @return Key 标签键
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标签键
                     * @param Key 标签键
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取标签值
                     * @return Value 标签值
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值
                     * @param Value 标签值
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取标签绑定的资源类型，当前支持类型："auto-scaling-group
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 标签绑定的资源类型，当前支持类型："auto-scaling-group
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置标签绑定的资源类型，当前支持类型："auto-scaling-group
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceType 标签绑定的资源类型，当前支持类型："auto-scaling-group
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 标签键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 标签绑定的资源类型，当前支持类型："auto-scaling-group
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_TAG_H_
