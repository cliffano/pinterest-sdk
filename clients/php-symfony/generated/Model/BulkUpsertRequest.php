<?php
/**
 * BulkUpsertRequest
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
 * Class representing the BulkUpsertRequest model.
 *
 * Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */

class BulkUpsertRequest 
{
        /**
     * @var BulkUpsertRequestCreate|null
     * @SerializedName("create")
     * @Assert\Type("OpenAPI\Server\Model\BulkUpsertRequestCreate")
     * @Type("OpenAPI\Server\Model\BulkUpsertRequestCreate")
     */
    protected ?BulkUpsertRequestCreate $create = null;

    /**
     * @var BulkUpsertRequestUpdate|null
     * @SerializedName("update")
     * @Assert\Type("OpenAPI\Server\Model\BulkUpsertRequestUpdate")
     * @Type("OpenAPI\Server\Model\BulkUpsertRequestUpdate")
     */
    protected ?BulkUpsertRequestUpdate $update = null;

    /**
     * Constructor
     * @param array|null $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        if (is_array($data)) {
            $this->create = array_key_exists('create', $data) ? $data['create'] : $this->create;
            $this->update = array_key_exists('update', $data) ? $data['update'] : $this->update;
        }
    }

    /**
     * Gets create.
     *
     * @return BulkUpsertRequestCreate|null
     */
    public function getCreate(): ?BulkUpsertRequestCreate
    {
        return $this->create;
    }



    /**
     * Sets create.
     *
     * @param BulkUpsertRequestCreate|null $create
     *
     * @return $this
     */
    public function setCreate(?BulkUpsertRequestCreate $create = null): self
    {
        $this->create = $create;

        return $this;
    }

    /**
     * Gets update.
     *
     * @return BulkUpsertRequestUpdate|null
     */
    public function getUpdate(): ?BulkUpsertRequestUpdate
    {
        return $this->update;
    }



    /**
     * Sets update.
     *
     * @param BulkUpsertRequestUpdate|null $update
     *
     * @return $this
     */
    public function setUpdate(?BulkUpsertRequestUpdate $update = null): self
    {
        $this->update = $update;

        return $this;
    }
}


