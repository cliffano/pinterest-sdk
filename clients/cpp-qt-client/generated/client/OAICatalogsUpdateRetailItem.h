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
 * OAICatalogsUpdateRetailItem.h
 *
 * An item to be updated
 */

#ifndef OAICatalogsUpdateRetailItem_H
#define OAICatalogsUpdateRetailItem_H

#include <QJsonObject>

#include "OAIUpdatableItemAttributes.h"
#include "OAIUpdateMaskFieldType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUpdatableItemAttributes;

class OAICatalogsUpdateRetailItem : public OAIObject {
public:
    OAICatalogsUpdateRetailItem();
    OAICatalogsUpdateRetailItem(QString json);
    ~OAICatalogsUpdateRetailItem() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getItemId() const;
    void setItemId(const QString &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    QString getOperation() const;
    void setOperation(const QString &operation);
    bool is_operation_Set() const;
    bool is_operation_Valid() const;

    OAIUpdatableItemAttributes getAttributes() const;
    void setAttributes(const OAIUpdatableItemAttributes &attributes);
    bool is_attributes_Set() const;
    bool is_attributes_Valid() const;

    QList<OAIUpdateMaskFieldType> getUpdateMask() const;
    void setUpdateMask(const QList<OAIUpdateMaskFieldType> &update_mask);
    bool is_update_mask_Set() const;
    bool is_update_mask_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    QString m_operation;
    bool m_operation_isSet;
    bool m_operation_isValid;

    OAIUpdatableItemAttributes m_attributes;
    bool m_attributes_isSet;
    bool m_attributes_isValid;

    QList<OAIUpdateMaskFieldType> m_update_mask;
    bool m_update_mask_isSet;
    bool m_update_mask_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsUpdateRetailItem)

#endif // OAICatalogsUpdateRetailItem_H
