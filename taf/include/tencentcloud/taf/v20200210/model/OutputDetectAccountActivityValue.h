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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTDETECTACCOUNTACTIVITYVALUE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTDETECTACCOUNTACTIVITYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务出参
                */
                class OutputDetectAccountActivityValue : public AbstractModel
                {
                public:
                    OutputDetectAccountActivityValue();
                    ~OutputDetectAccountActivityValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 ID accountType 不同对应不同的用户 ID。如是 QQ 或微信用户则填入对应的 openId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uid 用户 ID accountType 不同对应不同的用户 ID。如是 QQ 或微信用户则填入对应的 openId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户 ID accountType 不同对应不同的用户 ID。如是 QQ 或微信用户则填入对应的 openId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uid 用户 ID accountType 不同对应不同的用户 ID。如是 QQ 或微信用户则填入对应的 openId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取操作时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostTime 操作时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPostTime() const;

                    /**
                     * 设置操作时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PostTime 操作时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPostTime(const int64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取用户操作的真实外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIp 用户操作的真实外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户操作的真实外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserIp 用户操作的真实外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取0：表示不活跃
1 - 4：活跃等级由低到高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 0：表示不活跃
1 - 4：活跃等级由低到高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置0：表示不活跃
1 - 4：活跃等级由低到高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 0：表示不活跃
1 - 4：活跃等级由低到高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取账号标签：
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

环境标签：
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 账号标签：
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

环境标签：
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetType() const;

                    /**
                     * 设置账号标签：
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

环境标签：
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 账号标签：
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

环境标签：
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::vector<int64_t>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 用户 ID accountType 不同对应不同的用户 ID。如是 QQ 或微信用户则填入对应的 openId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 操作时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 用户操作的真实外网 IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 0：表示不活跃
1 - 4：活跃等级由低到高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 账号标签：
3，无效账号，送检账号参数无法成功解析，请检查微信openid是否有误 ，QQopenid是否与appidU对应，手机号是否有误。
4，黑名单，该账号在业务侧有过拉黑记录
5，白名单，该账号在业务侧有过加白名单记录

环境标签：
205，非公网有效ip，传进来的IP地址为内网ip地址或者ip保留地址；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTDETECTACCOUNTACTIVITYVALUE_H_
