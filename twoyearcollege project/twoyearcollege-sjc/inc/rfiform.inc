<!-- rfiform.inc -->
<aside class="floatingcontainer">
	<a class="fixedrfi" href="#formreveal" data-smooth-scroll>Request your free brochure</a>
</aside>

<section class="formoutercontainer" id="formreveal">
	<div class="formcontainer small-12 large-8 large-offset-2 columns">
		<form action="" method="post" id="sjirfi">
			<div class="row column">
				<p class="formheadertitle" style="font-weight: 700; font-size: 46px; line-height: 1.1;">Tell us more.</p>
			</div>

			<div class="row">
				<div class="small-12 medium-6 columns"><input type="text" id="txtFname" placeholder="First name" aria-label="first name" ></div>
				<div class="small-12 medium-6 columns"><input type="text" id="txtLname" placeholder="Last name" aria-label="last name"></div>
			</div>

			<div class="row">
				<div class="small-12 columns"><input type="text" id="txtStreetAddress" placeholder="Street address" aria-label="address"></div>
			</div>

			<div class="row">
				<div class="small-12 medium-6 columns"><input type="text" id="txtCity" placeholder="City" aria-label="city"></div>
				<div class="small-12 medium-3 columns">
					<select name="dropdown" id="txtState" aria-label="state">
						<option value="">State</option>
						<option value="AL">Alabama</option>
						<option value="AK">Alaska</option>
						<option value="AZ">Arizona</option>
						<option value="AR">Arkansas</option>
						<option value="CA">California</option>
						<option value="CO">Colorado</option>
						<option value="CT">Connecticut</option>
						<option value="DE">Delaware</option>
						<option value="FL">Florida</option>
						<option value="GA">Georgia</option>
						<option value="HI">Hawaii</option>
						<option value="ID">Idaho</option>
						<option value="IL">Illinois</option>
						<option value="IN">Indiana</option>
						<option value="IA">Iowa</option>
						<option value="KS">Kansas</option>
						<option value="KY">Kentucky</option>
						<option value="LA">Louisiana</option>
						<option value="ME">Maine</option>
						<option value="MD">Maryland</option>
						<option value="MA">Massachusetts</option>
						<option value="MI">Michigan</option>
						<option value="MN">Minnesota</option>
						<option value="MS">Mississippi</option>
						<option value="MO">Missouri</option>
						<option value="MT">Montana</option>
						<option value="NE">Nebraska</option>
						<option value="NV">Nevada</option>
						<option value="NH">New Hampshire</option>
						<option value="NJ">New Jersey</option>
						<option value="NM">New Mexico</option>
						<option value="NY">New York</option>
						<option value="NC">North Carolina</option>
						<option value="ND">North Dakota</option>
						<option value="OH">Ohio</option>
						<option value="OK">Oklahoma</option>
						<option value="OR">Oregon</option>
						<option value="PA">Pennsylvania</option>
						<option value="RI">Rhode Island</option>
						<option value="SC">South Carolina</option>
						<option value="SD">South Dakota</option>
						<option value="TN">Tennessee</option>
						<option value="TX">Texas</option>
						<option value="UT">Utah</option>
						<option value="VR">Vermont</option>
						<option value="VA">Virginia</option>
						<option value="WA">Washington</option>
						<option value="WV">West Virginia</option>
						<option value="WI">Wisconsin</option>
						<option value="WY">Wyoming</option>
					</select>
				</div>
				<div class="small-12 medium-3 columns"><input type="text" id="txtZip" placeholder="Zip" aria-label="zip"></div>
			</div>

			<div class="row">
				<div class="small-12 medium-6 columns">
					<input type="text" id="txtEmail" placeholder="Email" aria-label="email">
				</div>
				<div class="small-12 medium-6 columns">
					<input type="text" id="txtPhone"  placeholder="Phone" aria-label="phone">
				</div>
			</div>
			<div class="row column">
				<input type="text" id="txtHighSchoolGradYear"  placeholder="High School Graduation Year" aria-label="grad year">
				<input type="text" id="txtHighSchool"  placeholder="High School Name" aria-label="high school name">
				<!-- <input type="text" placeholder="Program of Interest (text field)" required> -->


				<!-- COMMENTED OUT CUZ WE'RE USING DEPENDENCY SELECT MENUS INSTEAD
			<select name="dropdown" id="txtAreYouCurrently" required>
											<option value="">I am...</option>
											<option value="Attending High School">Attending High School</option>
											<option value="Attending College">Attending College</option>
											<option value="Seeking a Second Degree">Seeking a Second Bachelors Degree</option>
											<option value="Seeking a Graduate Degree">Seeking a Graduate Degree</option>
											<option value="Interested in Marian's Adult Programs">Interested in Marian's Adult Programs</option>
									</select>
									<select name="dropdown" id="txtProgramInterest" required>
											<option value="">I am interested in...</option>
											<option value="Business">Business</option>
											<option value="Nursing">Nursing</option>
											<option value="Education">Education</option>
											<option value="Exercise Science">Exercise Science</option>
											<option value="Arts and Science">Arts and Science</option>
											<option value="Undecided">Undecided</option>
									</select>
			-->

				<!-- DEPENDENCY SCRIPT -->
				<select name="dropdown" id="txtAreYouCurrently"  class="parentSelection" aria-label="currently">
					<option id="iAm" value="">I am...</option>
					<option id="attendingHS" value="attending_high_school">Attending High School</option>
					<option id="attendingCollege" value="attending_college">Attending College</option>
					<option id="aParent" value="is_parent">A Parent</option>
				</select>
				<!--
								<option value="seeking_second_degree">Seeking a Second Bachelors Degree</option>
								<option value="seeking_graduate_degree">Seeking a Graduate Degree</option>
								<option value="marians_adult_programs">Interested in Marian's Adult Programs</option>
			-->
				<!-- <select name="dropdown" id="txtProgramInterest"  class="childSelection"  onchange="$('.programInterestSelection').val($(this).val());"></select> -->
<select name="dropdown" id="txtProgramInterest" class="childSelection" onchange="$('.programInterestSelection').val($(this).val());" aria-label="program interest">
	<option id="iAmInterestedIn" value="">I am interested in...</option>
	<option id="interestBusinessAdmin" value="Business Administration">Business Administration</option>
	<option id="interestLiberalArts" value="Liberal Arts">Liberal Arts</option>
	<option id="interestIT" value="Information Technology">Information Technology</option>
</select>



<!--
				<asp:LinkButton ID="LinkButtonSubmit" class="button secondary expanded" Text="REQUEST INFO" runat="server" OnClick="LinkButtonSubmit_Click" OnClientClick="">REQUEST INFO</asp:LinkButton>
				<asp:Literal ID="litDoRedirect" runat="server" Text="true" Visible="false" />
-->
				<!--Turn Text= to "false" for no redirect-->
<!--				<asp:Literal ID="litRedirectPath" runat="server" Text="https://findout.marian.edu/twoyearcollege/thank-you.aspx" Visible="false" />-->
				<!--Text = redirect location-->
<!--				<asp:Literal ID="litRecordType" runat="server" Text="TwoYear" Visible="false" />-->
				<!--Text = record type to send to Salesforce-->
<!--
				<div>
					<asp:Label ID="lblError" runat="server" Visible="false" Font-Bold="true" ForeColor="Red" EnableViewState="false" />
				</div>
-->
				<!--red error text under submit button if redirect fails-->
			</div>
			<input type="hidden" name="english" value="english" id="language" style="display: none;">
		</form>

		<div class="row column">
			<button type="button" id="ButtonSubmit" class="button secondary expanded" name="request info">REQUEST INFO</button>
		</div>

	</div>
</section>

<style media="screen">
	.enespanol #language {display: block;}
</style>

<!-- /rfiform.inc -->
