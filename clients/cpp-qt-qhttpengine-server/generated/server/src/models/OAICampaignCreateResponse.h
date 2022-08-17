/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICampaignCreateResponse.h
 *
 * 
 */

#ifndef OAICampaignCreateResponse_H
#define OAICampaignCreateResponse_H

#include <QJsonObject>

#include "OAICampaignCreateResponseItem.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICampaignCreateResponse : public OAIObject {
public:
    OAICampaignCreateResponse();
    OAICampaignCreateResponse(QString json);
    ~OAICampaignCreateResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICampaignCreateResponseItem> getItems() const;
    void setItems(const QList<OAICampaignCreateResponseItem> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICampaignCreateResponseItem> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICampaignCreateResponse)

#endif // OAICampaignCreateResponse_H
