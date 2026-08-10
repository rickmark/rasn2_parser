require 'spec_helper'

FILE_PATH = File.join(__dir__, '../fixtures/img4.asn1')

RSpec.describe ASN1Parser::Parser do
  let(:parser) { described_class.parse_file(FILE_PATH).module_definition }

  it 'should have a module definition' do
    children = parser.children
    puts children
    expect(parser.children[0]).to_not be_nil
  end
end