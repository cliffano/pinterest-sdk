/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIProductGroupPromotionUpdateRequest.h
 *
 * 
 */

#ifndef OAIProductGroupPromotionUpdateRequest_H
#define OAIProductGroupPromotionUpdateRequest_H

#include <QJsonObject>

#include "OAIProductGroupPromotion.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductGroupPromotionUpdateRequest : public OAIObject {
public:
    OAIProductGroupPromotionUpdateRequest();
    OAIProductGroupPromotionUpdateRequest(QString json);
    ~OAIProductGroupPromotionUpdateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdGroupId() const;
    void setAdGroupId(const QString &ad_group_id);
    bool is_ad_group_id_Set() const;
    bool is_ad_group_id_Valid() const;

    QList<OAIProductGroupPromotion> getProductGroupPromotion() const;
    void setProductGroupPromotion(const QList<OAIProductGroupPromotion> &product_group_promotion);
    bool is_product_group_promotion_Set() const;
    bool is_product_group_promotion_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_group_id;
    bool m_ad_group_id_isSet;
    bool m_ad_group_id_isValid;

    QList<OAIProductGroupPromotion> product_group_promotion;
    bool m_product_group_promotion_isSet;
    bool m_product_group_promotion_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupPromotionUpdateRequest)

#endif // OAIProductGroupPromotionUpdateRequest_H
