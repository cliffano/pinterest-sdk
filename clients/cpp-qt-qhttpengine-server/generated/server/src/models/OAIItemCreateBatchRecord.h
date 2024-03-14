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
 * OAIItemCreateBatchRecord.h
 *
 * Object describing an item batch record to create items
 */

#ifndef OAIItemCreateBatchRecord_H
#define OAIItemCreateBatchRecord_H

#include <QJsonObject>

#include "OAIItemAttributes.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemCreateBatchRecord : public OAIObject {
public:
    OAIItemCreateBatchRecord();
    OAIItemCreateBatchRecord(QString json);
    ~OAIItemCreateBatchRecord() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    OAIItemAttributes getAttributes() const;
    void setAttributes(const OAIItemAttributes &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    OAIItemAttributes attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemCreateBatchRecord)

#endif // OAIItemCreateBatchRecord_H
