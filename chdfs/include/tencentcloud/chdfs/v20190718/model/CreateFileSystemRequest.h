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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATEFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATEFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * CreateFileSystem请求参数结构体
                */
                class CreateFileSystemRequest : public AbstractModel
                {
                public:
                    CreateFileSystemRequest();
                    ~CreateFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统名称
                     * @return FileSystemName 文件系统名称
                     */
                    std::string GetFileSystemName() const;

                    /**
                     * 设置文件系统名称
                     * @param FileSystemName 文件系统名称
                     */
                    void SetFileSystemName(const std::string& _fileSystemName);

                    /**
                     * 判断参数 FileSystemName 是否已赋值
                     * @return FileSystemName 是否已赋值
                     */
                    bool FileSystemNameHasBeenSet() const;

                    /**
                     * 获取文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     * @return CapacityQuota 文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     * @param CapacityQuota 文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     */
                    void SetCapacityQuota(const uint64_t& _capacityQuota);

                    /**
                     * 判断参数 CapacityQuota 是否已赋值
                     * @return CapacityQuota 是否已赋值
                     */
                    bool CapacityQuotaHasBeenSet() const;

                    /**
                     * 获取文件系统描述
                     * @return Description 文件系统描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件系统描述
                     * @param Description 文件系统描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 文件系统名称
                     */
                    std::string m_fileSystemName;
                    bool m_fileSystemNameHasBeenSet;

                    /**
                     * 文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * 文件系统描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_CREATEFILESYSTEMREQUEST_H_
