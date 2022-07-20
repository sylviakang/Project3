#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VALUE1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VALUE2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ANSWER;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->VALUE1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VALUE2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ANSWER = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(440, 110);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"應檢人資料";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(320, 70);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 1;
			this->textBox4->Text = L"2022/06/13";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(217, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"考  試  日  期";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(320, 22);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"106010203";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(217, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 15);
			this->label3->TabIndex = 0;
			this->label3->Text = L"術科測試編號";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(67, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"00";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"座號";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"康姿瑩";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"姓名";
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->VALUE1, this->OP,
					this->VALUE2, this->ANSWER
			});
			this->dgv->Location = System::Drawing::Point(13, 130);
			this->dgv->Name = L"dgv";
			this->dgv->RowHeadersWidth = 51;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dgv->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dgv->RowTemplate->Height = 27;
			this->dgv->Size = System::Drawing::Size(440, 400);
			this->dgv->TabIndex = 1;
			// 
			// VALUE1
			// 
			this->VALUE1->HeaderText = L"VALUE1";
			this->VALUE1->MinimumWidth = 6;
			this->VALUE1->Name = L"VALUE1";
			// 
			// OP
			// 
			this->OP->HeaderText = L"OP";
			this->OP->MinimumWidth = 6;
			this->OP->Name = L"OP";
			// 
			// VALUE2
			// 
			this->VALUE2->HeaderText = L"VALUE2";
			this->VALUE2->MinimumWidth = 6;
			this->VALUE2->Name = L"VALUE2";
			// 
			// ANSWER
			// 
			this->ANSWER->HeaderText = L"ANSWER";
			this->ANSWER->MinimumWidth = 6;
			this->ANSWER->Name = L"ANSWER";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(462, 533);
			this->Controls->Add(this->dgv);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"求出分數的加、減、乘、除運算";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ din = File::OpenText("C://test//1060308.T03");
		String^ line;
		String^ sign = "";
		while (line = din->ReadLine())
		{
			sign = "";
			array<String^>^ col = line->Split(',');
			int b = Convert::ToInt32(col[0]);
			int a = Convert::ToInt32(col[1]);
			String^ op = col[2];
			int y = Convert::ToInt32(col[3]);
			int x = Convert::ToInt32(col[4]);
			String^ v1 = b.ToString() + "/" + a.ToString();
			String^ v2 = y.ToString() + "/" + x.ToString();
			int ansTop;
			int ansDown;
			if (op == "+") {
				//(bx+ay)	/	ax
				ansTop = b * x + a * y;
				ansDown = a * x;
			}
			else if (op == "-") {
				//(bx-ay)	/	ax
				ansTop = b * x - a * y;
				ansDown = a * x;
			}
			else if (op == "*") {
				ansTop = b *y;
				ansDown =  a * x;
			}
			else if (op == "/") {
				ansTop = b * x;
				ansDown = a *y;
			}
			if (ansTop < 0 && ansDown < 0) {
				ansTop = Math::Abs(ansTop);
				ansDown = Math::Abs(ansDown);
			}
			else if (ansTop < 0 && ansDown > 0) {
				ansTop = Math::Abs(ansTop);
				sign = "-";
			}
			else if (ansTop > 0 && ansDown < 0) {
				ansDown = Math::Abs(ansDown);
				sign = "-";
			}
			int gcd = 1;
			for (int i = 2; i <= ansTop; i++) {
				if (ansTop % i == 0 && ansDown % i == 0) gcd = i;
			}
			ansTop = ansTop / gcd;
			ansDown = ansDown / gcd;
			String^ ans = ansTop.ToString() + "/" + ansDown.ToString();
			if (ans[0] == '0') {
				ans = "0";
				sign = "";
			}
			if (ansTop % ansDown == 0) ans = (ansTop / ansDown).ToString();
			ans = sign + ans;
			array<String^>^ tRecord = {v1 , op, v2 , ans};
			dgv->Rows->Add(tRecord);
		}

	}
};
}
