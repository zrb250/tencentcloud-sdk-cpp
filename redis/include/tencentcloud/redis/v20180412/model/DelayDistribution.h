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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DELAYDISTRIBUTION_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DELAYDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 延时分布详情
                */
                class DelayDistribution : public AbstractModel
                {
                public:
                    DelayDistribution();
                    ~DelayDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分布阶梯
                     * @return Ladder 分布阶梯
                     */
                    int64_t GetLadder() const;

                    /**
                     * 设置分布阶梯
                     * @param Ladder 分布阶梯
                     */
                    void SetLadder(const int64_t& _ladder);

                    /**
                     * 判断参数 Ladder 是否已赋值
                     * @return Ladder 是否已赋值
                     */
                    bool LadderHasBeenSet() const;

                    /**
                     * 获取大小
                     * @return Size 大小
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置大小
                     * @param Size 大小
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return Updatetime 修改时间
                     */
                    int64_t GetUpdatetime() const;

                    /**
                     * 设置修改时间
                     * @param Updatetime 修改时间
                     */
                    void SetUpdatetime(const int64_t& _updatetime);

                    /**
                     * 判断参数 Updatetime 是否已赋值
                     * @return Updatetime 是否已赋值
                     */
                    bool UpdatetimeHasBeenSet() const;

                private:

                    /**
                     * 分布阶梯
                     */
                    int64_t m_ladder;
                    bool m_ladderHasBeenSet;

                    /**
                     * 大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    int64_t m_updatetime;
                    bool m_updatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELAYDISTRIBUTION_H_
