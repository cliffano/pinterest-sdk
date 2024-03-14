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
 * OAIBulkUpsertRequestUpdate.h
 *
 * Request for creation of entities in bulk.
 */

#ifndef OAIBulkUpsertRequestUpdate_H
#define OAIBulkUpsertRequestUpdate_H

#include <QJsonObject>

#include "OAIAdGroupUpdateRequest.h"
#include "OAIAdUpdateRequest.h"
#include "OAICampaignUpdateRequest.h"
#include "OAIKeywordUpdate.h"
#include "OAIProductGroupPromotionUpdateRequest.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBulkUpsertRequestUpdate : public OAIObject {
public:
    OAIBulkUpsertRequestUpdate();
    OAIBulkUpsertRequestUpdate(QString json);
    ~OAIBulkUpsertRequestUpdate() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICampaignUpdateRequest> getCampaigns() const;
    void setCampaigns(const QList<OAICampaignUpdateRequest> &campaigns);
    bool is_campaigns_Set() const;
    bool is_campaigns_Valid() const;

    QList<OAIAdGroupUpdateRequest> getAdGroups() const;
    void setAdGroups(const QList<OAIAdGroupUpdateRequest> &ad_groups);
    bool is_ad_groups_Set() const;
    bool is_ad_groups_Valid() const;

    QList<OAIAdUpdateRequest> getAds() const;
    void setAds(const QList<OAIAdUpdateRequest> &ads);
    bool is_ads_Set() const;
    bool is_ads_Valid() const;

    QList<OAIProductGroupPromotionUpdateRequest> getProductGroups() const;
    void setProductGroups(const QList<OAIProductGroupPromotionUpdateRequest> &product_groups);
    bool is_product_groups_Set() const;
    bool is_product_groups_Valid() const;

    QList<OAIKeywordUpdate> getKeywords() const;
    void setKeywords(const QList<OAIKeywordUpdate> &keywords);
    bool is_keywords_Set() const;
    bool is_keywords_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICampaignUpdateRequest> campaigns;
    bool m_campaigns_isSet;
    bool m_campaigns_isValid;

    QList<OAIAdGroupUpdateRequest> ad_groups;
    bool m_ad_groups_isSet;
    bool m_ad_groups_isValid;

    QList<OAIAdUpdateRequest> ads;
    bool m_ads_isSet;
    bool m_ads_isValid;

    QList<OAIProductGroupPromotionUpdateRequest> product_groups;
    bool m_product_groups_isSet;
    bool m_product_groups_isValid;

    QList<OAIKeywordUpdate> keywords;
    bool m_keywords_isSet;
    bool m_keywords_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBulkUpsertRequestUpdate)

#endif // OAIBulkUpsertRequestUpdate_H
