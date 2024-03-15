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
 * OAICatalogsHotelItemsFilter.h
 *
 * 
 */

#ifndef OAICatalogsHotelItemsFilter_H
#define OAICatalogsHotelItemsFilter_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsHotelItemsFilter : public OAIObject {
public:
    OAICatalogsHotelItemsFilter();
    OAICatalogsHotelItemsFilter(QString json);
    ~OAICatalogsHotelItemsFilter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCatalogType() const;
    void setCatalogType(const QString &catalog_type);
    bool is_catalog_type_Set() const;
    bool is_catalog_type_Valid() const;

    QList<QString> getHotelIds() const;
    void setHotelIds(const QList<QString> &hotel_ids);
    bool is_hotel_ids_Set() const;
    bool is_hotel_ids_Valid() const;

    QString getCatalogId() const;
    void setCatalogId(const QString &catalog_id);
    bool is_catalog_id_Set() const;
    bool is_catalog_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_catalog_type;
    bool m_catalog_type_isSet;
    bool m_catalog_type_isValid;

    QList<QString> m_hotel_ids;
    bool m_hotel_ids_isSet;
    bool m_hotel_ids_isValid;

    QString m_catalog_id;
    bool m_catalog_id_isSet;
    bool m_catalog_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsHotelItemsFilter)

#endif // OAICatalogsHotelItemsFilter_H
