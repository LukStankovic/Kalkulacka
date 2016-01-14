object Telesa_form: TTelesa_form
  Left = 0
  Top = 0
  Caption = 'T'#283'lesa'
  ClientHeight = 491
  ClientWidth = 310
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = -6
    Width = 310
    Height = 159
    BevelOuter = bvNone
    Color = 6314972
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 8
      Width = 43
      Height = 23
      Caption = 'Kv'#225'dr'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object vysledek_kvadr: TLabel
      Left = 155
      Top = 67
      Width = 134
      Height = 21
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object kvadr_stranaA: TLabeledEdit
      Left = 24
      Top = 48
      Width = 121
      Height = 21
      BevelInner = bvLowered
      BevelOuter = bvNone
      BorderStyle = bsNone
      EditLabel.Width = 43
      EditLabel.Height = 13
      EditLabel.Caption = 'Strana A'
      TabOrder = 0
      Text = '1'
    end
    object kvadr_stranaB: TLabeledEdit
      Left = 24
      Top = 88
      Width = 121
      Height = 21
      BevelInner = bvLowered
      BevelOuter = bvNone
      BorderStyle = bsNone
      EditLabel.Width = 43
      EditLabel.Height = 13
      EditLabel.Caption = 'Strana B'
      TabOrder = 1
      Text = '1'
    end
    object kvadr_stranaC: TLabeledEdit
      Left = 24
      Top = 129
      Width = 121
      Height = 21
      BevelInner = bvLowered
      BevelOuter = bvNone
      BorderStyle = bsNone
      EditLabel.Width = 43
      EditLabel.Height = 13
      EditLabel.Caption = 'Strana C'
      TabOrder = 2
      Text = '1'
    end
    object povrch_kvadr: TButton
      Left = 151
      Top = 112
      Width = 75
      Height = 25
      Caption = 'Povrch'
      TabOrder = 3
      OnClick = povrch_kvadrClick
    end
    object objem_kvadr: TButton
      Left = 232
      Top = 112
      Width = 75
      Height = 25
      Caption = 'Objem'
      TabOrder = 4
      OnClick = objem_kvadrClick
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 150
    Width = 310
    Height = 150
    BevelOuter = bvNone
    Color = 13797539
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    object Label2: TLabel
      Left = 8
      Top = 8
      Width = 41
      Height = 23
      Caption = 'V'#225'lec'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object vysledek_valec: TLabel
      Left = 155
      Top = 67
      Width = 134
      Height = 21
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object objem_valec: TButton
      Left = 232
      Top = 112
      Width = 75
      Height = 25
      Caption = 'Objem'
      TabOrder = 0
      OnClick = objem_valecClick
    end
    object povrch_valec: TButton
      Left = 151
      Top = 112
      Width = 75
      Height = 25
      Caption = 'Povrch'
      TabOrder = 1
      OnClick = povrch_valecClick
    end
    object valec_vyska: TLabeledEdit
      Left = 24
      Top = 88
      Width = 121
      Height = 21
      BevelInner = bvLowered
      BevelOuter = bvNone
      BorderStyle = bsNone
      EditLabel.Width = 33
      EditLabel.Height = 17
      EditLabel.Caption = 'V'#253#353'ka'
      TabOrder = 2
      Text = '1'
    end
    object valec_polomer: TLabeledEdit
      Left = 24
      Top = 48
      Width = 121
      Height = 21
      BevelInner = bvLowered
      BevelOuter = bvNone
      BorderStyle = bsNone
      EditLabel.Width = 49
      EditLabel.Height = 17
      EditLabel.Caption = 'Polom'#283'r'
      TabOrder = 3
      Text = '1'
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 300
    Width = 310
    Height = 150
    BevelOuter = bvNone
    Color = 15832596
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    object Label3: TLabel
      Left = 8
      Top = 8
      Width = 43
      Height = 23
      Caption = 'Koule'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object vysledek_koule: TLabel
      Left = 163
      Top = 70
      Width = 126
      Height = 21
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object objem_koule: TButton
      Left = 232
      Top = 112
      Width = 75
      Height = 25
      Caption = 'Objem'
      TabOrder = 0
      OnClick = objem_kouleClick
    end
    object povrch_koule: TButton
      Left = 151
      Top = 112
      Width = 75
      Height = 25
      Caption = 'Povrch'
      TabOrder = 1
      OnClick = povrch_kouleClick
    end
    object koule_polomer: TLabeledEdit
      Left = 24
      Top = 70
      Width = 121
      Height = 21
      BevelInner = bvLowered
      BevelOuter = bvNone
      BorderStyle = bsNone
      EditLabel.Width = 49
      EditLabel.Height = 17
      EditLabel.Caption = 'Polom'#283'r'
      TabOrder = 2
      Text = '1'
    end
  end
  object zavrit: TButton
    Left = 0
    Top = 448
    Width = 155
    Height = 41
    Caption = 'Zav'#345#237't'
    TabOrder = 3
    OnClick = zavritClick
  end
  object ukoncit: TButton
    Left = 155
    Top = 448
    Width = 155
    Height = 41
    Caption = 'Ukon'#269'it'
    TabOrder = 4
    OnClick = ukoncitClick
  end
end
