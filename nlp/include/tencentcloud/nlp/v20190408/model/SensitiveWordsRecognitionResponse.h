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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENSITIVEWORDSRECOGNITIONRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENSITIVEWORDSRECOGNITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * SensitiveWordsRecognition返回参数结构体
                */
                class SensitiveWordsRecognitionResponse : public AbstractModel
                {
                public:
                    SensitiveWordsRecognitionResponse();
                    ~SensitiveWordsRecognitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取敏感词数组
                     * @return SensitiveWords 敏感词数组
                     */
                    std::vector<std::string> GetSensitiveWords() const;

                    /**
                     * 判断参数 SensitiveWords 是否已赋值
                     * @return SensitiveWords 是否已赋值
                     */
                    bool SensitiveWordsHasBeenSet() const;

                private:

                    /**
                     * 敏感词数组
                     */
                    std::vector<std::string> m_sensitiveWords;
                    bool m_sensitiveWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENSITIVEWORDSRECOGNITIONRESPONSE_H_
