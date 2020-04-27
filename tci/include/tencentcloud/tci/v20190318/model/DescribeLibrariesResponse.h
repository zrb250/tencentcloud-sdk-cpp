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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBELIBRARIESRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBELIBRARIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/Library.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeLibraries返回参数结构体
                */
                class DescribeLibrariesResponse : public AbstractModel
                {
                public:
                    DescribeLibrariesResponse();
                    ~DescribeLibrariesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取人员库列表
                     * @return LibrarySet 人员库列表
                     */
                    std::vector<Library> GetLibrarySet() const;

                    /**
                     * 判断参数 LibrarySet 是否已赋值
                     * @return LibrarySet 是否已赋值
                     */
                    bool LibrarySetHasBeenSet() const;

                    /**
                     * 获取人员库总数量
                     * @return TotalCount 人员库总数量
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 人员库列表
                     */
                    std::vector<Library> m_librarySet;
                    bool m_librarySetHasBeenSet;

                    /**
                     * 人员库总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBELIBRARIESRESPONSE_H_