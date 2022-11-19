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
 * OAIMedia_list_200_response_allOf.h
 *
 * 
 */

#ifndef OAIMedia_list_200_response_allOf_H
#define OAIMedia_list_200_response_allOf_H

#include <QJsonObject>

#include "OAIMediaUploadDetails.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMedia_list_200_response_allOf : public OAIObject {
public:
    OAIMedia_list_200_response_allOf();
    OAIMedia_list_200_response_allOf(QString json);
    ~OAIMedia_list_200_response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIMediaUploadDetails> getItems() const;
    void setItems(const QList<OAIMediaUploadDetails> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIMediaUploadDetails> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMedia_list_200_response_allOf)

#endif // OAIMedia_list_200_response_allOf_H
