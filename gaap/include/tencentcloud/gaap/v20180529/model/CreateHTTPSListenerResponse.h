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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateHTTPSListener返回参数结构体
                */
                class CreateHTTPSListenerResponse : public AbstractModel
                {
                public:
                    CreateHTTPSListenerResponse();
                    ~CreateHTTPSListenerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取创建的监听器ID
                     * @return ListenerId 创建的监听器ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                private:

                    /**
                     * 创建的监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERRESPONSE_H_