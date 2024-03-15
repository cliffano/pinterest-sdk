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
 * OAIItemResponse_anyOf_1.h
 *
 * 
 */

#ifndef OAIItemResponse_anyOf_1_H
#define OAIItemResponse_anyOf_1_H

#include <QJsonObject>

#include "OAICatalogsHotelItemErrorResponse.h"
#include "OAICatalogsRetailItemErrorResponse.h"
#include "OAICatalogsType.h"
#include "OAIItemValidationEvent.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemResponse_anyOf_1 : public OAIObject {
public:
    OAIItemResponse_anyOf_1();
    OAIItemResponse_anyOf_1(QString json);
    ~OAIItemResponse_anyOf_1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsType getCatalogType() const;
    void setCatalogType(const OAICatalogsType &catalog_type);
    bool is_catalog_type_Set() const;
    bool is_catalog_type_Valid() const;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    QList<OAIItemValidationEvent> getErrors() const;
    void setErrors(const QList<OAIItemValidationEvent> &errors);
    bool is_errors_Set() const;
    bool is_errors_Valid() const;

    QString getHotelId() const;
    void setHotelId(const QString &hotel_id);
    bool is_hotel_id_Set() const;
    bool is_hotel_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsType catalog_type;
    bool m_catalog_type_isSet;
    bool m_catalog_type_isValid;

    QString item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    QList<OAIItemValidationEvent> errors;
    bool m_errors_isSet;
    bool m_errors_isValid;

    QString hotel_id;
    bool m_hotel_id_isSet;
    bool m_hotel_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemResponse_anyOf_1)

#endif // OAIItemResponse_anyOf_1_H
