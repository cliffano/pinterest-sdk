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
 * OAICatalogsItems.h
 *
 * Response object of catalogs items
 */

#ifndef OAICatalogsItems_H
#define OAICatalogsItems_H

#include <QJsonObject>

#include "OAIItemResponse.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIItemResponse;

class OAICatalogsItems : public OAIObject {
public:
    OAICatalogsItems();
    OAICatalogsItems(QString json);
    ~OAICatalogsItems() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIItemResponse> getItems() const;
    void setItems(const QList<OAIItemResponse> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIItemResponse> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsItems)

#endif // OAICatalogsItems_H
