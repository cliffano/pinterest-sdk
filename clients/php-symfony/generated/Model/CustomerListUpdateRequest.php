<?php
/**
 * CustomerListUpdateRequest
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
 * Class representing the CustomerListUpdateRequest model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CustomerListUpdateRequest 
{
        /**
     * Records list. Can be any combination of emails, MAIDs, or IDFAs. Emails must be lowercase and can be plain text or hashed using SHA1, SHA256, or MD5. MAIDs and IDFAs must be hashed with SHA1, SHA256, or MD5.
     *
     * @var string|null
     * @SerializedName("records")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected ?string $records = null;

    /**
     * @var UserListOperationType|null
     * @SerializedName("operation_type")
     * @Assert\NotNull()
     * @Assert\Valid()
        * @Accessor(getter="getSerializedOperationType")
        * @Type("string")
     */
    protected ?UserListOperationType $operationType = null;

    /**
     * @var Exception|null
     * @SerializedName("exceptions")
     * @Assert\Type("OpenAPI\Server\Model\Exception")
     * @Type("OpenAPI\Server\Model\Exception")
     */
    protected ?Exception $exceptions = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->records = array_key_exists('records', $data) ? $data['records'] : $this->records;
            $this->operationType = array_key_exists('operationType', $data) ? $data['operationType'] : $this->operationType;
            $this->exceptions = array_key_exists('exceptions', $data) ? $data['exceptions'] : $this->exceptions;
        }
    }

    /**
     * Gets records.
     *
     * @return string|null
     */
    public function getRecords(): ?string
    {
        return $this->records;
    }



    /**
     * Sets records.
     *
     * @param string|null $records  Records list. Can be any combination of emails, MAIDs, or IDFAs. Emails must be lowercase and can be plain text or hashed using SHA1, SHA256, or MD5. MAIDs and IDFAs must be hashed with SHA1, SHA256, or MD5.
     *
     * @return $this
     */
    public function setRecords(?string $records): self
    {
        $this->records = $records;

        return $this;
    }

    /**
     * Gets operationType.
     *
     * @return UserListOperationType|null
     */
    public function getOperationType(): ?UserListOperationType
    {
        return $this->operationType;
    }

    /**
    * Gets operationType for serialization.
    *
    * @return string|null
    */
    public function getSerializedOperationType(): string|null
    {
        return $this->operationType?->value ? (string) $this->operationType->value : null;
    }


    /**
     * Sets operationType.
     *
     * @param UserListOperationType|null $operationType
     *
     * @return $this
     */
    public function setOperationType(?UserListOperationType $operationType): self
    {
        $this->operationType = $operationType;

        return $this;
    }

    /**
     * Gets exceptions.
     *
     * @return Exception|null
     */
    public function getExceptions(): ?Exception
    {
        return $this->exceptions;
    }



    /**
     * Sets exceptions.
     *
     * @param Exception|null $exceptions
     *
     * @return $this
     */
    public function setExceptions(?Exception $exceptions = null): self
    {
        $this->exceptions = $exceptions;

        return $this;
    }
}


