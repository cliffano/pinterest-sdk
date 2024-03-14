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
 * OAIItemUpdateBatchRecord.h
 *
 * Object describing an item batch record to update items
 */

#ifndef OAIItemUpdateBatchRecord_H
#define OAIItemUpdateBatchRecord_H

#include <QJsonObject>

#include "OAIUpdatableItemAttributes.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIItemUpdateBatchRecord : public OAIObject {
public:
    OAIItemUpdateBatchRecord();
    OAIItemUpdateBatchRecord(QString json);
    ~OAIItemUpdateBatchRecord() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    OAIUpdatableItemAttributes getAttributes() const;
    void setAttributes(const OAIUpdatableItemAttributes &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    OAIUpdatableItemAttributes attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIItemUpdateBatchRecord)

#endif // OAIItemUpdateBatchRecord_H
