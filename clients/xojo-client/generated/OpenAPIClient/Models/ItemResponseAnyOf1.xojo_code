#tag Class
Protected Class ItemResponseAnyOf1

	#tag Property, Flags = &h0
		catalog_type As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The catalog item id in the merchant namespace
		#tag EndNote
		item_id As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Array with the errors for the item id requested
		#tag EndNote
		errors() As OpenAPIClient.Models.ItemValidationEvent
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The catalog hotel id in the merchant namespace
		#tag EndNote
		hotel_id As Xoson.O.OptionalString
	#tag EndProperty





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
			Name="catalog_type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="CatalogsType"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="item_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="errors"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ItemValidationEvent"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hotel_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


