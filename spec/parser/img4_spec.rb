# frozen_string_literal: true

require 'spec_helper'

FILE_PATH = File.join(__dir__, '../fixtures/img4.asn1')

RSpec.describe ASN1Parser::Parser do
  let(:parser) { described_class.parse_file(FILE_PATH).module_definition }

  it 'has a module definition' do
    parser.children

    expect(parser.children[0]).not_to be_nil
  end
end
