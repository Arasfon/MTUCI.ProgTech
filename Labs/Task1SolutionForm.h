#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task1SolutionForm
	/// </summary>
	public ref class Task1SolutionForm : public System::Windows::Forms::Form
	{
	public:
		Task1SolutionForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task1SolutionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ X1TextBox;
	private: System::Windows::Forms::TextBox^ Y1TextBox;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ X2TextBox;





	private: System::Windows::Forms::TextBox^ Y2TextBox;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ X3TextBox;
	private: System::Windows::Forms::TextBox^ Y3TextBox;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ X4TextBox;





	private: System::Windows::Forms::TextBox^ Y4TextBox;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ X5TextBox;





	private: System::Windows::Forms::TextBox^ Y5TextBox;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ ResultTextBox;
	private: System::Windows::Forms::Button^ GoToTitleButton;
	private: System::Windows::Forms::Button^ CalculateButton;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task1SolutionForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->X1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Y1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->X2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Y2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->X3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Y3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->X4TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Y4TextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->X5TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Y5TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ResultTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GoToTitleButton = (gcnew System::Windows::Forms::Button());
			this->CalculateButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите точки пятиугольника:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->X1TextBox, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->Y1TextBox, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(220, 44);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 15);
			this->label2->TabIndex = 0;
			this->label2->Text = L"x1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(113, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 15);
			this->label3->TabIndex = 1;
			this->label3->Text = L"y1:";
			// 
			// X1TextBox
			// 
			this->X1TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->X1TextBox->Location = System::Drawing::Point(3, 18);
			this->X1TextBox->Name = L"X1TextBox";
			this->X1TextBox->Size = System::Drawing::Size(104, 23);
			this->X1TextBox->TabIndex = 2;
			this->X1TextBox->Text = L"3";
			// 
			// Y1TextBox
			// 
			this->Y1TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Y1TextBox->Location = System::Drawing::Point(113, 18);
			this->Y1TextBox->Name = L"Y1TextBox";
			this->Y1TextBox->Size = System::Drawing::Size(104, 23);
			this->Y1TextBox->TabIndex = 3;
			this->Y1TextBox->Text = L"2";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label5, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->X2TextBox, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->Y2TextBox, 1, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(238, 27);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(218, 44);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"x2:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(112, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 1;
			this->label5->Text = L"y2:";
			// 
			// X2TextBox
			// 
			this->X2TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->X2TextBox->Location = System::Drawing::Point(3, 18);
			this->X2TextBox->Name = L"X2TextBox";
			this->X2TextBox->Size = System::Drawing::Size(103, 23);
			this->X2TextBox->TabIndex = 2;
			this->X2TextBox->Text = L"9";
			// 
			// Y2TextBox
			// 
			this->Y2TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Y2TextBox->Location = System::Drawing::Point(112, 18);
			this->Y2TextBox->Name = L"Y2TextBox";
			this->Y2TextBox->Size = System::Drawing::Size(103, 23);
			this->Y2TextBox->TabIndex = 3;
			this->Y2TextBox->Text = L"6";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->AutoSize = true;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->label6, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label7, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->X3TextBox, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->Y3TextBox, 1, 1);
			this->tableLayoutPanel3->Location = System::Drawing::Point(12, 77);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->Size = System::Drawing::Size(220, 44);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 0;
			this->label6->Text = L"x3:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(113, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 15);
			this->label7->TabIndex = 1;
			this->label7->Text = L"y3:";
			// 
			// X3TextBox
			// 
			this->X3TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->X3TextBox->Location = System::Drawing::Point(3, 18);
			this->X3TextBox->Name = L"X3TextBox";
			this->X3TextBox->Size = System::Drawing::Size(104, 23);
			this->X3TextBox->TabIndex = 2;
			this->X3TextBox->Text = L"14";
			// 
			// Y3TextBox
			// 
			this->Y3TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Y3TextBox->Location = System::Drawing::Point(113, 18);
			this->Y3TextBox->Name = L"Y3TextBox";
			this->Y3TextBox->Size = System::Drawing::Size(104, 23);
			this->Y3TextBox->TabIndex = 3;
			this->Y3TextBox->Text = L"2";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->AutoSize = true;
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->label8, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label9, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->X4TextBox, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->Y4TextBox, 1, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(238, 77);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel4->Size = System::Drawing::Size(218, 44);
			this->tableLayoutPanel4->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 15);
			this->label8->TabIndex = 0;
			this->label8->Text = L"x4:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(112, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 15);
			this->label9->TabIndex = 1;
			this->label9->Text = L"y4:";
			// 
			// X4TextBox
			// 
			this->X4TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->X4TextBox->Location = System::Drawing::Point(3, 18);
			this->X4TextBox->Name = L"X4TextBox";
			this->X4TextBox->Size = System::Drawing::Size(103, 23);
			this->X4TextBox->TabIndex = 2;
			this->X4TextBox->Text = L"10";
			// 
			// Y4TextBox
			// 
			this->Y4TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Y4TextBox->Location = System::Drawing::Point(112, 18);
			this->Y4TextBox->Name = L"Y4TextBox";
			this->Y4TextBox->Size = System::Drawing::Size(103, 23);
			this->Y4TextBox->TabIndex = 3;
			this->Y4TextBox->Text = L"-3";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->AutoSize = true;
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->label10, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->label11, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->X5TextBox, 0, 1);
			this->tableLayoutPanel5->Controls->Add(this->Y5TextBox, 1, 1);
			this->tableLayoutPanel5->Location = System::Drawing::Point(124, 127);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 2;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel5->Size = System::Drawing::Size(224, 44);
			this->tableLayoutPanel5->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 15);
			this->label10->TabIndex = 0;
			this->label10->Text = L"x5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(115, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 15);
			this->label11->TabIndex = 1;
			this->label11->Text = L"y5:";
			// 
			// X5TextBox
			// 
			this->X5TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->X5TextBox->Location = System::Drawing::Point(3, 18);
			this->X5TextBox->Name = L"X5TextBox";
			this->X5TextBox->Size = System::Drawing::Size(106, 23);
			this->X5TextBox->TabIndex = 2;
			this->X5TextBox->Text = L"7";
			// 
			// Y5TextBox
			// 
			this->Y5TextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Y5TextBox->Location = System::Drawing::Point(115, 18);
			this->Y5TextBox->Name = L"Y5TextBox";
			this->Y5TextBox->Size = System::Drawing::Size(106, 23);
			this->Y5TextBox->TabIndex = 3;
			this->Y5TextBox->Text = L"-2";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 174);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 15);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Результат:";
			// 
			// ResultTextBox
			// 
			this->ResultTextBox->Location = System::Drawing::Point(12, 192);
			this->ResultTextBox->Name = L"ResultTextBox";
			this->ResultTextBox->ReadOnly = true;
			this->ResultTextBox->Size = System::Drawing::Size(444, 23);
			this->ResultTextBox->TabIndex = 7;
			// 
			// GoToTitleButton
			// 
			this->GoToTitleButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->GoToTitleButton->Location = System::Drawing::Point(12, 224);
			this->GoToTitleButton->Name = L"GoToTitleButton";
			this->GoToTitleButton->Size = System::Drawing::Size(100, 23);
			this->GoToTitleButton->TabIndex = 8;
			this->GoToTitleButton->Text = L"На главную";
			this->GoToTitleButton->UseVisualStyleBackColor = true;
			this->GoToTitleButton->Click += gcnew System::EventHandler(this, &Task1SolutionForm::GoToTitleButton_Click);
			// 
			// CalculateButton
			// 
			this->CalculateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->CalculateButton->Location = System::Drawing::Point(356, 224);
			this->CalculateButton->Name = L"CalculateButton";
			this->CalculateButton->Size = System::Drawing::Size(100, 23);
			this->CalculateButton->TabIndex = 9;
			this->CalculateButton->Text = L"Вычислить";
			this->CalculateButton->UseVisualStyleBackColor = true;
			this->CalculateButton->Click += gcnew System::EventHandler(this, &Task1SolutionForm::CalculateButton_Click);
			// 
			// Task1SolutionForm
			// 
			this->AcceptButton = this->CalculateButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 259);
			this->Controls->Add(this->CalculateButton);
			this->Controls->Add(this->GoToTitleButton);
			this->Controls->Add(this->ResultTextBox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->tableLayoutPanel5);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Task1SolutionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №1: Решение";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task1SolutionForm::Task1SolutionForm_FormClosed);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GoToTitleButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CalculateButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Task1SolutionForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    };
}
