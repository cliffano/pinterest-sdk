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
 * OAICampaignCreateResponseItem.h
 *
 * 
 */

#ifndef OAICampaignCreateResponseItem_H
#define OAICampaignCreateResponseItem_H

#include <QJsonObject>

#include "OAICampaignCreateResponseData.h"
#include "OAIException.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICampaignCreateResponseData;
class OAIException;

class OAICampaignCreateResponseItem : public OAIObject {
public:
    OAICampaignCreateResponseItem();
    OAICampaignCreateResponseItem(QString json);
    ~OAICampaignCreateResponseItem() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICampaignCreateResponseData getData() const;
    void setData(const OAICampaignCreateResponseData &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    QList<OAIException> getExceptions() const;
    void setExceptions(const QList<OAIException> &exceptions);
    bool is_exceptions_Set() const;
    bool is_exceptions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICampaignCreateResponseData m_data;
    bool m_data_isSet;
    bool m_data_isValid;

    QList<OAIException> m_exceptions;
    bool m_exceptions_isSet;
    bool m_exceptions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICampaignCreateResponseItem)

#endif // OAICampaignCreateResponseItem_H
