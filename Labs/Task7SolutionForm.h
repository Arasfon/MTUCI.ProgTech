#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Task7SolutionForm
	/// </summary>
	public ref class Task7SolutionForm : public System::Windows::Forms::Form
	{
	public:
		Task7SolutionForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Task7SolutionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CalculateButton;
	protected:
	private: System::Windows::Forms::Button^ GoToTitleButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ SourceDataGridView;
	private: System::Windows::Forms::Label^ IntermediateValuesLabel;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ ResultArrayDataGridView;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Task7SolutionForm::typeid));
			this->CalculateButton = (gcnew System::Windows::Forms::Button());
			this->GoToTitleButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SourceDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->IntermediateValuesLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ResultArrayDataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SourceDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultArrayDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// CalculateButton
			// 
			this->CalculateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->CalculateButton->Location = System::Drawing::Point(493, 430);
			this->CalculateButton->Name = L"CalculateButton";
			this->CalculateButton->Size = System::Drawing::Size(100, 23);
			this->CalculateButton->TabIndex = 11;
			this->CalculateButton->Text = L"Вычислить";
			this->CalculateButton->UseVisualStyleBackColor = true;
			this->CalculateButton->Click += gcnew System::EventHandler(this, &Task7SolutionForm::CalculateButton_Click);
			// 
			// GoToTitleButton
			// 
			this->GoToTitleButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->GoToTitleButton->Location = System::Drawing::Point(12, 430);
			this->GoToTitleButton->Name = L"GoToTitleButton";
			this->GoToTitleButton->Size = System::Drawing::Size(100, 23);
			this->GoToTitleButton->TabIndex = 10;
			this->GoToTitleButton->Text = L"На главную";
			this->GoToTitleButton->UseVisualStyleBackColor = true;
			this->GoToTitleButton->Click += gcnew System::EventHandler(this, &Task7SolutionForm::GoToTitleButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Исходная матрица:";
			// 
			// SourceDataGridView
			// 
			this->SourceDataGridView->AllowUserToAddRows = false;
			this->SourceDataGridView->AllowUserToDeleteRows = false;
			this->SourceDataGridView->AllowUserToResizeColumns = false;
			this->SourceDataGridView->AllowUserToResizeRows = false;
			this->SourceDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SourceDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->SourceDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->SourceDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->SourceDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->SourceDataGridView->DefaultCellStyle = dataGridViewCellStyle1;
			this->SourceDataGridView->Location = System::Drawing::Point(15, 27);
			this->SourceDataGridView->Name = L"SourceDataGridView";
			this->SourceDataGridView->ReadOnly = true;
			this->SourceDataGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->SourceDataGridView->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->SourceDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->SourceDataGridView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->SourceDataGridView->Size = System::Drawing::Size(578, 296);
			this->SourceDataGridView->TabIndex = 13;
			this->SourceDataGridView->ColumnAdded += gcnew System::Windows::Forms::DataGridViewColumnEventHandler(this, &Task7SolutionForm::SourceDataGridView_ColumnAdded);
			// 
			// IntermediateValuesLabel
			// 
			this->IntermediateValuesLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->IntermediateValuesLabel->AutoSize = true;
			this->IntermediateValuesLabel->Location = System::Drawing::Point(12, 326);
			this->IntermediateValuesLabel->Name = L"IntermediateValuesLabel";
			this->IntermediateValuesLabel->Size = System::Drawing::Size(179, 15);
			this->IntermediateValuesLabel->TabIndex = 14;
			this->IntermediateValuesLabel->Text = L"Проемужточные значения: нет";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 341);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Полученный массив:";
			// 
			// ResultArrayDataGridView
			// 
			this->ResultArrayDataGridView->AllowUserToAddRows = false;
			this->ResultArrayDataGridView->AllowUserToDeleteRows = false;
			this->ResultArrayDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ResultArrayDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->ResultArrayDataGridView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->ResultArrayDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->ResultArrayDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultArrayDataGridView->ColumnHeadersVisible = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ResultArrayDataGridView->DefaultCellStyle = dataGridViewCellStyle3;
			this->ResultArrayDataGridView->Location = System::Drawing::Point(12, 359);
			this->ResultArrayDataGridView->Name = L"ResultArrayDataGridView";
			this->ResultArrayDataGridView->ReadOnly = true;
			this->ResultArrayDataGridView->RowHeadersVisible = false;
			this->ResultArrayDataGridView->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->ResultArrayDataGridView->Size = System::Drawing::Size(581, 65);
			this->ResultArrayDataGridView->TabIndex = 16;
			// 
			// Task7SolutionForm
			// 
			this->AcceptButton = this->CalculateButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 465);
			this->Controls->Add(this->ResultArrayDataGridView);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->IntermediateValuesLabel);
			this->Controls->Add(this->SourceDataGridView);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CalculateButton);
			this->Controls->Add(this->GoToTitleButton);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Task7SolutionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Лабораторная работа №7: Решение";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Task7SolutionForm::Task7SolutionForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SourceDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultArrayDataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalculateButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void GoToTitleButton_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void Task7SolutionForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
    private: System::Void SourceDataGridView_ColumnAdded(System::Object^ sender, System::Windows::Forms::DataGridViewColumnEventArgs^ e);
    };
}
