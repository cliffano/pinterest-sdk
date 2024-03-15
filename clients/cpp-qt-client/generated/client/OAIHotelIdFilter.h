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
 * OAIHotelIdFilter.h
 *
 * 
 */

#ifndef OAIHotelIdFilter_H
#define OAIHotelIdFilter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIHotelIdFilter : public OAIObject {
public:
    OAIHotelIdFilter();
    OAIHotelIdFilter(QString json);
    ~OAIHotelIdFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringCriteria getHotelId() const;
    void setHotelId(const OAICatalogsProductGroupMultipleStringCriteria &hotel_id);
    bool is_hotel_id_Set() const;
    bool is_hotel_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringCriteria m_hotel_id;
    bool m_hotel_id_isSet;
    bool m_hotel_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIHotelIdFilter)

#endif // OAIHotelIdFilter_H
