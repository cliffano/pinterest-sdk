<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 * A successful OAuth access token response for the refresh token flow.
 */
class OauthAccessTokenResponseRefresh
{
    /**
     * @DTA\Data(field="response_type", nullable=true)
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $response_type = null;

    /**
     * @DTA\Data(field="access_token")
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $access_token = null;

    /**
     * @DTA\Data(field="token_type")
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $token_type = null;

    /**
     * @DTA\Data(field="expires_in")
     * @DTA\Validator(name="Scalar", options={"type":"int"})
     */
    public ?int $expires_in = null;

    /**
     * @DTA\Data(field="scope")
     * @DTA\Validator(name="Scalar", options={"type":"string"})
     */
    public ?string $scope = null;

}
