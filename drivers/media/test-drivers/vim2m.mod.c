#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x3c6c1861, "v4l2_m2m_request_queue" },
	{ 0xf5b3e281, "vb2_request_validate" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0xa4aa6c75, "v4l2_m2m_ioctl_streamoff" },
	{ 0xf6fb84af, "v4l2_m2m_ioctl_streamon" },
	{ 0x181ae485, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x42686bcb, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x21f30db6, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x49c3dcb7, "v4l2_m2m_ioctl_expbuf" },
	{ 0x8a5234e2, "v4l2_m2m_ioctl_qbuf" },
	{ 0x70ce40ad, "v4l2_m2m_ioctl_querybuf" },
	{ 0xb06b5917, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x7f4a410, "v4l2_m2m_fop_mmap" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0x37d7b86b, "v4l2_m2m_fop_poll" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x3e555d03, "platform_device_register" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xb985482b, "v4l2_m2m_ctx_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x59e6a6c3, "v4l2_fh_del" },
	{ 0xb07f1848, "v4l2_m2m_job_finish" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x66136c46, "v4l2_m2m_buf_copy_metadata" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0x52cda3f7, "v4l2_ctrl_request_setup" },
	{ 0x34073e60, "v4l2_m2m_next_buf" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x97358f5c, "v4l2_m2m_register_media_controller" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0x4481bf1e, "media_device_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0xd4fc93fc, "v4l2_fh_exit" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x84ea0f4d, "v4l2_fh_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x774361d0, "v4l2_m2m_ctx_init" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x595393f8, "v4l2_fh_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0xea7c20ed, "v4l2_m2m_buf_remove" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb6469109, "v4l2_m2m_buf_queue" },
	{ 0x91369769, "vb2_queue_init" },
	{ 0x7fb230bb, "vb2_vmalloc_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8e5a1e6f, "v4l2_m2m_get_vq" },
	{ 0x32c52784, "v4l2_ctrl_request_complete" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-common,mc,videobuf2-vmalloc");


MODULE_INFO(srcversion, "A426A524ACD65FCFE981C07");
