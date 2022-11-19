/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIProductGroupPromotionCreateRequest.h
 *
 * 
 */

#ifndef OAIProductGroupPromotionCreateRequest_H
#define OAIProductGroupPromotionCreateRequest_H

#include <QJsonObject>

#include "OAIProductGroupPromotionCommon.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIProductGroupPromotionCommon;

class OAIProductGroupPromotionCreateRequest : public OAIObject {
public:
    OAIProductGroupPromotionCreateRequest();
    OAIProductGroupPromotionCreateRequest(QString json);
    ~OAIProductGroupPromotionCreateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdGroupId() const;
    void setAdGroupId(const QString &ad_group_id);
    bool is_ad_group_id_Set() const;
    bool is_ad_group_id_Valid() const;

    QList<OAIProductGroupPromotionCommon> getProductGroupPromotion() const;
    void setProductGroupPromotion(const QList<OAIProductGroupPromotionCommon> &product_group_promotion);
    bool is_product_group_promotion_Set() const;
    bool is_product_group_promotion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_group_id;
    bool m_ad_group_id_isSet;
    bool m_ad_group_id_isValid;

    QList<OAIProductGroupPromotionCommon> product_group_promotion;
    bool m_product_group_promotion_isSet;
    bool m_product_group_promotion_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupPromotionCreateRequest)

#endif // OAIProductGroupPromotionCreateRequest_H
