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
 * OAICatalogsItemsUpsertBatchRequest.h
 *
 * Request object to upsert catalogs items
 */

#ifndef OAICatalogsItemsUpsertBatchRequest_H
#define OAICatalogsItemsUpsertBatchRequest_H

#include <QJsonObject>

#include "OAIBatchOperation.h"
#include "OAICountry.h"
#include "OAIItemUpsertBatchRecord.h"
#include "OAILanguage.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsItemsUpsertBatchRequest : public OAIObject {
public:
    OAICatalogsItemsUpsertBatchRequest();
    OAICatalogsItemsUpsertBatchRequest(QString json);
    ~OAICatalogsItemsUpsertBatchRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICountry getCountry() const;
    void setCountry(const OAICountry &country);
    bool is_country_Set() const;
    bool is_country_Valid() const;

    OAILanguage getLanguage() const;
    void setLanguage(const OAILanguage &language);
    bool is_language_Set() const;
    bool is_language_Valid() const;

    OAIBatchOperation getOperation() const;
    void setOperation(const OAIBatchOperation &operation);
    bool is_operation_Set() const;
    bool is_operation_Valid() const;

    QList<OAIItemUpsertBatchRecord> getItems() const;
    void setItems(const QList<OAIItemUpsertBatchRecord> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICountry country;
    bool m_country_isSet;
    bool m_country_isValid;

    OAILanguage language;
    bool m_language_isSet;
    bool m_language_isValid;

    OAIBatchOperation operation;
    bool m_operation_isSet;
    bool m_operation_isValid;

    QList<OAIItemUpsertBatchRecord> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsItemsUpsertBatchRequest)

#endif // OAICatalogsItemsUpsertBatchRequest_H