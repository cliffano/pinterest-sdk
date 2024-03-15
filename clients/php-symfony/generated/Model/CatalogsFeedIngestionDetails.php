<?php
/**
 * CatalogsFeedIngestionDetails
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
 * Class representing the CatalogsFeedIngestionDetails model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsFeedIngestionDetails 
{
        /**
     * @var CatalogsFeedIngestionErrors|null
     * @SerializedName("errors")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsFeedIngestionErrors")
     * @Type("OpenAPI\Server\Model\CatalogsFeedIngestionErrors")
     */
    protected ?CatalogsFeedIngestionErrors $errors = null;

    /**
     * @var CatalogsFeedIngestionInfo|null
     * @SerializedName("info")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsFeedIngestionInfo")
     * @Type("OpenAPI\Server\Model\CatalogsFeedIngestionInfo")
     */
    protected ?CatalogsFeedIngestionInfo $info = null;

    /**
     * @var CatalogsFeedIngestionWarnings|null
     * @SerializedName("warnings")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsFeedIngestionWarnings")
     * @Type("OpenAPI\Server\Model\CatalogsFeedIngestionWarnings")
     */
    protected ?CatalogsFeedIngestionWarnings $warnings = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->errors = array_key_exists('errors', $data) ? $data['errors'] : $this->errors;
            $this->info = array_key_exists('info', $data) ? $data['info'] : $this->info;
            $this->warnings = array_key_exists('warnings', $data) ? $data['warnings'] : $this->warnings;
        }
    }

    /**
     * Gets errors.
     *
     * @return CatalogsFeedIngestionErrors|null
     */
    public function getErrors(): ?CatalogsFeedIngestionErrors
    {
        return $this->errors;
    }



    /**
     * Sets errors.
     *
     * @param CatalogsFeedIngestionErrors|null $errors
     *
     * @return $this
     */
    public function setErrors(?CatalogsFeedIngestionErrors $errors): self
    {
        $this->errors = $errors;

        return $this;
    }

    /**
     * Gets info.
     *
     * @return CatalogsFeedIngestionInfo|null
     */
    public function getInfo(): ?CatalogsFeedIngestionInfo
    {
        return $this->info;
    }



    /**
     * Sets info.
     *
     * @param CatalogsFeedIngestionInfo|null $info
     *
     * @return $this
     */
    public function setInfo(?CatalogsFeedIngestionInfo $info): self
    {
        $this->info = $info;

        return $this;
    }

    /**
     * Gets warnings.
     *
     * @return CatalogsFeedIngestionWarnings|null
     */
    public function getWarnings(): ?CatalogsFeedIngestionWarnings
    {
        return $this->warnings;
    }



    /**
     * Sets warnings.
     *
     * @param CatalogsFeedIngestionWarnings|null $warnings
     *
     * @return $this
     */
    public function setWarnings(?CatalogsFeedIngestionWarnings $warnings): self
    {
        $this->warnings = $warnings;

        return $this;
    }
}


