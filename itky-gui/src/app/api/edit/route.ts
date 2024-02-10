import { NextRequest, NextResponse } from 'next/server';

const githubToken = process.env.API_GITHUB_TOKEN;

const POST = async ( req: Request ) => {
  const args = req.body;

  const url = 'https://api.github.com/repos/Krostar5793/itky-quest/actions/workflows/edit.yml/dispatches';

  const headers = {
    'Authorization': `Bearer ${githubToken}`,
    'Accept': 'application/vnd.github.v3+json',
  };
  const body = {
    ref: 'main',
    inputs: { args },
  };

  try {
    const response = await fetch(url, {
      method: 'POST',
      headers: headers,
      body: JSON.stringify(body),
    });

    if ( response.ok ) return NextResponse.json({ message: 'Workflow triggered successfully' });
    else return NextResponse.json({ message: 'Failed to trigger workflow' });
  } catch ( e ) {
    console.error('Error triggering workflow:', e);
    return NextResponse.json({ message: 'Internal Server Error' });
  }
};

export { POST };
