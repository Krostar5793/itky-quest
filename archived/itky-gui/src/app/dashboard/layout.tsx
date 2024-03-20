import MenuBar from '@/app/components/MenuBar';

const DashboardLayout = ({ children }: { children: React.ReactNode }) => {
  return (
    <>
      <h1 className='px-8 py-4 font-mono text-2xl'>Edit Documents</h1>
      <MenuBar />
      <div>{ children }</div>
    </>
  );
};

export default DashboardLayout;
