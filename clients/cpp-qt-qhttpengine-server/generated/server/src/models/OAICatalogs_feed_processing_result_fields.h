/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogs_feed_processing_result_fields.h
 *
 * 
 */

#ifndef OAICatalogs_feed_processing_result_fields_H
#define OAICatalogs_feed_processing_result_fields_H

#include <QJsonObject>

#include "OAICatalogsFeedIngestionDetails.h"
#include "OAICatalogsFeedProcessingStatus.h"
#include "OAICatalogsFeedProductCounts.h"
#include "OAICatalogsFeedValidationDetails.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogs_feed_processing_result_fields : public OAIObject {
public:
    OAICatalogs_feed_processing_result_fields();
    OAICatalogs_feed_processing_result_fields(QString json);
    ~OAICatalogs_feed_processing_result_fields() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

Q_DECLARE_METATYPE(OpenAPI::OAICatalogs_feed_processing_result_fields)

#endif // OAICatalogs_feed_processing_result_fields_H
