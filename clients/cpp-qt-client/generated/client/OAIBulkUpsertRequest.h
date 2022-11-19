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
 * OAIBulkUpsertRequest.h
 *
 * Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
 */

#ifndef OAIBulkUpsertRequest_H
#define OAIBulkUpsertRequest_H

#include <QJsonObject>

#include "OAIBulkUpsertRequestCreate.h"
#include "OAIBulkUpsertRequestUpdate.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBulkUpsertRequestCreate;
class OAIBulkUpsertRequestUpdate;

class OAIBulkUpsertRequest : public OAIObject {
public:
    OAIBulkUpsertRequest();
    OAIBulkUpsertRequest(QString json);
    ~OAIBulkUpsertRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIBulkUpsertRequestCreate getCreate() const;
    void setCreate(const OAIBulkUpsertRequestCreate &create);
    bool is_create_Set() const;
    bool is_create_Valid() const;

    OAIBulkUpsertRequestUpdate getUpdate() const;
    void setUpdate(const OAIBulkUpsertRequestUpdate &update);
    bool is_update_Set() const;
    bool is_update_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIBulkUpsertRequestCreate create;
    bool m_create_isSet;
    bool m_create_isValid;

    OAIBulkUpsertRequestUpdate update;
    bool m_update_isSet;
    bool m_update_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBulkUpsertRequest)

#endif // OAIBulkUpsertRequest_H
