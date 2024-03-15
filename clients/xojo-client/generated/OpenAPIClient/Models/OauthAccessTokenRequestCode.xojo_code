#tag Class
Protected Class OauthAccessTokenRequestCode

	#tag Property, Flags = &h0
		grant_type As String
	#tag EndProperty


	#tag Property, Flags = &h0
		code As String
	#tag EndProperty


	#tag Property, Flags = &h0
		redirect_uri As String
	#tag EndProperty


    #tag Enum, Name = Grant_typeEnum, Type = Integer, Flags = &h0
        
        AuthorizationCode
        RefreshToken
        
    #tag EndEnum


	#tag Method, Flags = &h0
		Shared Function Grant_typeEnumToString(value As Grant_typeEnum) As String
		  Select Case value
		    
		    Case Grant_typeEnum.AuthorizationCode
		      Return "authorization_code"
		    Case Grant_typeEnum.RefreshToken
		      Return "refresh_token"
		    
		  End Select
		  Return ""
		End Function
	#tag EndMethod


	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="code"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="redirect_uri"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


