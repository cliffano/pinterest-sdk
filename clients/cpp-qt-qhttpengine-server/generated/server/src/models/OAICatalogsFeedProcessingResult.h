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
 * OAICatalogsFeedProcessingResult.h
 *
 * 
 */

#ifndef OAICatalogsFeedProcessingResult_H
#define OAICatalogsFeedProcessingResult_H

#include <QJsonObject>

#include "OAICatalogsFeedIngestionDetails.h"
#include "OAICatalogsFeedProcessingStatus.h"
#include "OAICatalogsFeedProductCounts.h"
#include "OAICatalogsFeedValidationDetails.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedProcessingResult : public OAIObject {
public:
    OAICatalogsFeedProcessingResult();
    OAICatalogsFeedProcessingResult(QString json);
    ~OAICatalogsFeedProcessingResult() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QDateTime getCreatedAt() const;
    void setCreatedAt(const QDateTime &created_at);
    bool is_created_at_Set() const;
    bool is_created_at_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getUpdatedAt() const;
    void setUpdatedAt(const QDateTime &updated_at);
    bool is_updated_at_Set() const;
    bool is_updated_at_Valid() const;

    OAICatalogsFeedIngestionDetails getIngestionDetails() const;
    void setIngestionDetails(const OAICatalogsFeedIngestionDetails &ingestion_details);
    bool is_ingestion_details_Set() const;
    bool is_ingestion_details_Valid() const;

    OAICatalogsFeedProcessingStatus getStatus() const;
    void setStatus(const OAICatalogsFeedProcessingStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    OAICatalogsFeedProductCounts getProductCounts() const;
    void setProductCounts(const OAICatalogsFeedProductCounts &product_counts);
    bool is_product_counts_Set() const;
    bool is_product_counts_Valid() const;

    OAICatalogsFeedValidationDetails getValidationDetails() const;
    void setValidationDetails(const OAICatalogsFeedValidationDetails &validation_details);
    bool is_validation_details_Set() const;
    bool is_validation_details_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QDateTime created_at;
    bool m_created_at_isSet;
    bool m_created_at_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QDateTime updated_at;
    bool m_updated_at_isSet;
    bool m_updated_at_isValid;

    OAICatalogsFeedIngestionDetails ingestion_details;
    bool m_ingestion_details_isSet;
    bool m_ingestion_details_isValid;

    OAICatalogsFeedProcessingStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    OAICatalogsFeedProductCounts product_counts;
    bool m_product_counts_isSet;
    bool m_product_counts_isValid;

    OAICatalogsFeedValidationDetails validation_details;
    bool m_validation_details_isSet;
    bool m_validation_details_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedProcessingResult)

#endif // OAICatalogsFeedProcessingResult_H
