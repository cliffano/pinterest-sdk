<?php
/**
 * CatalogsFeedValidationDetails
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
 * Class representing the CatalogsFeedValidationDetails model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class CatalogsFeedValidationDetails 
{
        /**
     * @var CatalogsFeedValidationErrors|null
     * @SerializedName("errors")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsFeedValidationErrors")
     * @Type("OpenAPI\Server\Model\CatalogsFeedValidationErrors")
     */
    protected ?CatalogsFeedValidationErrors $errors = null;

    /**
     * @var CatalogsFeedValidationWarnings|null
     * @SerializedName("warnings")
     * @Assert\NotNull()
     * @Assert\Valid()
     * @Assert\Type("OpenAPI\Server\Model\CatalogsFeedValidationWarnings")
     * @Type("OpenAPI\Server\Model\CatalogsFeedValidationWarnings")
     */
    protected ?CatalogsFeedValidationWarnings $warnings = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->errors = array_key_exists('errors', $data) ? $data['errors'] : $this->errors;
            $this->warnings = array_key_exists('warnings', $data) ? $data['warnings'] : $this->warnings;
        }
    }

    /**
     * Gets errors.
     *
     * @return CatalogsFeedValidationErrors|null
     */
    public function getErrors(): ?CatalogsFeedValidationErrors
    {
        return $this->errors;
    }



    /**
     * Sets errors.
     *
     * @param CatalogsFeedValidationErrors|null $errors
     *
     * @return $this
     */
    public function setErrors(?CatalogsFeedValidationErrors $errors): self
    {
        $this->errors = $errors;

        return $this;
    }

    /**
     * Gets warnings.
     *
     * @return CatalogsFeedValidationWarnings|null
     */
    public function getWarnings(): ?CatalogsFeedValidationWarnings
    {
        return $this->warnings;
    }



    /**
     * Sets warnings.
     *
     * @param CatalogsFeedValidationWarnings|null $warnings
     *
     * @return $this
     */
    public function setWarnings(?CatalogsFeedValidationWarnings $warnings): self
    {
        $this->warnings = $warnings;

        return $this;
    }
}


