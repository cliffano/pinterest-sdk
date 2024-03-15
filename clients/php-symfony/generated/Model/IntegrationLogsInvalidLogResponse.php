<?php
/**
 * IntegrationLogsInvalidLogResponse
 *
 * PHP version 8.1.1
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\Accessor;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the IntegrationLogsInvalidLogResponse model.
 *
 * Schema describing the response when a log has invalid fields.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class IntegrationLogsInvalidLogResponse 
{
        /**
     * @var IntegrationLogsInvalidLogResponseRejectedLogsInner[]|null
     * @SerializedName("rejected_logs")
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\IntegrationLogsInvalidLogResponseRejectedLogsInner")
     * })
     * @Type("array<OpenAPI\Server\Model\IntegrationLogsInvalidLogResponseRejectedLogsInner>")
     */
    protected ?array $rejectedLogs = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->rejectedLogs = array_key_exists('rejectedLogs', $data) ? $data['rejectedLogs'] : $this->rejectedLogs;
        }
    }

    /**
     * Gets rejectedLogs.
     *
     * @return IntegrationLogsInvalidLogResponseRejectedLogsInner[]|null
     */
    public function getRejectedLogs(): ?array
    {
        return $this->rejectedLogs;
    }



    /**
     * Sets rejectedLogs.
     *
     * @param IntegrationLogsInvalidLogResponseRejectedLogsInner[]|null $rejectedLogs
     *
     * @return $this
     */
    public function setRejectedLogs(?array $rejectedLogs = null): self
    {
        $this->rejectedLogs = $rejectedLogs;

        return $this;
    }
}

