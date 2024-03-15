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
 * OAICatalogsHotelBatchItem.h
 *
 * Hotel batch item
 */

#ifndef OAICatalogsHotelBatchItem_H
#define OAICatalogsHotelBatchItem_H

#include <QJsonObject>

#include "OAICatalogsCreateHotelItem.h"
#include "OAICatalogsDeleteHotelItem.h"
#include "OAICatalogsUpdatableHotelAttributes.h"
#include "OAICatalogsUpdateHotelItem.h"
#include "OAICatalogsUpsertHotelItem.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICatalogsUpdatableHotelAttributes;

class OAICatalogsHotelBatchItem : public OAIObject {
public:
    OAICatalogsHotelBatchItem();
    OAICatalogsHotelBatchItem(QString json);
    ~OAICatalogsHotelBatchItem() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getHotelId() const;
    void setHotelId(const QString &hotel_id);
    bool is_hotel_id_Set() const;
    bool is_hotel_id_Valid() const;

    QString getOperation() const;
    void setOperation(const QString &operation);
    bool is_operation_Set() const;
    bool is_operation_Valid() const;

    OAICatalogsUpdatableHotelAttributes getAttributes() const;
    void setAttributes(const OAICatalogsUpdatableHotelAttributes &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_hotel_id;
    bool m_hotel_id_isSet;
    bool m_hotel_id_isValid;

    QString m_operation;
    bool m_operation_isSet;
    bool m_operation_isValid;

    OAICatalogsUpdatableHotelAttributes m_attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsHotelBatchItem)

#endif // OAICatalogsHotelBatchItem_H
