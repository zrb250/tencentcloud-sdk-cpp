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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENTIMENTANALYSISREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENTIMENTANALYSISREQUEST_H_

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
                * SentimentAnalysis请求参数结构体
                */
                class SentimentAnalysisRequest : public AbstractModel
                {
                public:
                    SentimentAnalysisRequest();
                    ~SentimentAnalysisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待分析的文本（仅支持UTF-8格式，不超过200字）
                     * @return Text 待分析的文本（仅支持UTF-8格式，不超过200字）
                     */
                    std::string GetText() const;

                    /**
                     * 设置待分析的文本（仅支持UTF-8格式，不超过200字）
                     * @param Text 待分析的文本（仅支持UTF-8格式，不超过200字）
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取文本所属类型（默认取4值）：
1、电商
2、APP
3、美食
4、酒店和其他
                     * @return Flag 文本所属类型（默认取4值）：
1、电商
2、APP
3、美食
4、酒店和其他
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置文本所属类型（默认取4值）：
1、电商
2、APP
3、美食
4、酒店和其他
                     * @param Flag 文本所属类型（默认取4值）：
1、电商
2、APP
3、美食
4、酒店和其他
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * 待分析的文本（仅支持UTF-8格式，不超过200字）
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文本所属类型（默认取4值）：
1、电商
2、APP
3、美食
4、酒店和其他
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENTIMENTANALYSISREQUEST_H_
