/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIProductGroupPromotionUpdateItem.h
 *
 * 
 */

#ifndef OAIProductGroupPromotionUpdateItem_H
#define OAIProductGroupPromotionUpdateItem_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductGroupPromotionUpdateItem : public OAIObject {
public:
    OAIProductGroupPromotionUpdateItem();
    OAIProductGroupPromotionUpdateItem(QString json);
    ~OAIProductGroupPromotionUpdateItem() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductGroupPromotionUpdateItem)

#endif // OAIProductGroupPromotionUpdateItem_H
