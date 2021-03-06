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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVATINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVATINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 增值税发票识别结果
                */
                class TextVatInvoice : public AbstractModel
                {
                public:
                    TextVatInvoice();
                    ~TextVatInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称（关键字）。
                     * @return Name 识别出的字段名称（关键字）。
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的字段名称（关键字）。
                     * @param Name 识别出的字段名称（关键字）。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     * @return Value 识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     * @param Value 识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取字段在原图中的中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Polygon 字段在原图中的中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Polygon GetPolygon() const;

                    /**
                     * 设置字段在原图中的中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Polygon 字段在原图中的中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolygon(const Polygon& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     */
                    bool PolygonHasBeenSet() const;

                private:

                    /**
                     * 识别出的字段名称（关键字）。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 字段在原图中的中的四点坐标。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Polygon m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTVATINVOICE_H_
