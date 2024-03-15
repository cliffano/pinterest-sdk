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
 * OAIConversionApiResponse.h
 *
 * Schema describing the object in the response, which contains information about the events that were received and processed.
 */

#ifndef OAIConversionApiResponse_H
#define OAIConversionApiResponse_H

#include <QJsonObject>

#include "OAIConversionApiResponse_events_inner.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIConversionApiResponse_events_inner;

class OAIConversionApiResponse : public OAIObject {
public:
    OAIConversionApiResponse();
    OAIConversionApiResponse(QString json);
    ~OAIConversionApiResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getNumEventsReceived() const;
    void setNumEventsReceived(const qint32 &num_events_received);
    bool is_num_events_received_Set() const;
    bool is_num_events_received_Valid() const;

    qint32 getNumEventsProcessed() const;
    void setNumEventsProcessed(const qint32 &num_events_processed);
    bool is_num_events_processed_Set() const;
    bool is_num_events_processed_Valid() const;

    QList<OAIConversionApiResponse_events_inner> getEvents() const;
    void setEvents(const QList<OAIConversionApiResponse_events_inner> &events);
    bool is_events_Set() const;
    bool is_events_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_num_events_received;
    bool m_num_events_received_isSet;
    bool m_num_events_received_isValid;

    qint32 m_num_events_processed;
    bool m_num_events_processed_isSet;
    bool m_num_events_processed_isValid;

    QList<OAIConversionApiResponse_events_inner> m_events;
    bool m_events_isSet;
    bool m_events_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIConversionApiResponse)

#endif // OAIConversionApiResponse_H
