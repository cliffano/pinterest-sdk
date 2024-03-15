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
 * OAICatalogsHotelProductGroupFiltersAllOf.h
 *
 * 
 */

#ifndef OAICatalogsHotelProductGroupFiltersAllOf_H
#define OAICatalogsHotelProductGroupFiltersAllOf_H

#include <QJsonObject>

#include "OAICatalogsHotelProductGroupFilterKeys.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsHotelProductGroupFiltersAllOf : public OAIObject {
public:
    OAICatalogsHotelProductGroupFiltersAllOf();
    OAICatalogsHotelProductGroupFiltersAllOf(QString json);
    ~OAICatalogsHotelProductGroupFiltersAllOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICatalogsHotelProductGroupFilterKeys> getAllOf() const;
    void setAllOf(const QList<OAICatalogsHotelProductGroupFilterKeys> &all_of);
    bool is_all_of_Set() const;
    bool is_all_of_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICatalogsHotelProductGroupFilterKeys> all_of;
    bool m_all_of_isSet;
    bool m_all_of_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsHotelProductGroupFiltersAllOf)

#endif // OAICatalogsHotelProductGroupFiltersAllOf_H
