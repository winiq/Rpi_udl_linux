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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x181ae485, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x1b222146, "vchiq_mmal_port_set_format" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8fa6094a, "v4l2_event_unsubscribe" },
	{ 0x10e225c5, "vchiq_mmal_port_disable" },
	{ 0x21f30db6, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x97358f5c, "v4l2_m2m_register_media_controller" },
	{ 0x18c21f47, "video_device_release_empty" },
	{ 0x78de7ed9, "v4l2_event_queue_fh" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x774361d0, "v4l2_m2m_ctx_init" },
	{ 0x253f1a5f, "vchiq_mmal_port_parameter_set" },
	{ 0x140dd485, "v4l2_device_unregister" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0xfab8fc03, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xcb00c57, "__video_register_device" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7f4a410, "v4l2_m2m_fop_mmap" },
	{ 0xdd64e639, "strscpy" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xf6fb84af, "v4l2_m2m_ioctl_streamon" },
	{ 0x78911096, "v4l2_device_register" },
	{ 0x33eb4b8b, "v4l2_ctrl_new_std_menu" },
	{ 0x42686bcb, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x5f5c6b51, "vchiq_mmal_component_finalise" },
	{ 0xdcb764ad, "memset" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x33700033, "v4l2_event_subscribe" },
	{ 0xa4aa6c75, "v4l2_m2m_ioctl_streamoff" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3f529d29, "video_unregister_device" },
	{ 0xb06b5917, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x595393f8, "v4l2_fh_init" },
	{ 0x689cb425, "v4l2_ctrl_subscribe_event" },
	{ 0x4b1a3a2d, "vb2_plane_vaddr" },
	{ 0xa5a3c487, "vb2_buffer_done" },
	{ 0x69234131, "dma_buf_put" },
	{ 0x9166fada, "strncpy" },
	{ 0xaa1fd904, "dma_buf_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x59274055, "vchiq_mmal_component_enable" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x7393eb03, "media_device_cleanup" },
	{ 0x8e5a1e6f, "v4l2_m2m_get_vq" },
	{ 0x85cef54e, "vchiq_mmal_component_init" },
	{ 0x8a5234e2, "v4l2_m2m_ioctl_qbuf" },
	{ 0x37d7b86b, "v4l2_m2m_fop_poll" },
	{ 0x5519e4ca, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb6469109, "v4l2_m2m_buf_queue" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0xbb38098, "vchiq_mmal_component_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x70ce40ad, "v4l2_m2m_ioctl_querybuf" },
	{ 0x113f8fc5, "mmal_vchi_buffer_init" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x49c3dcb7, "v4l2_m2m_ioctl_expbuf" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x94703bfb, "vchiq_mmal_port_enable" },
	{ 0xf6108b66, "__media_device_register" },
	{ 0x41330af, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0xca111076, "vchiq_mmal_submit_buffer" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x8f2698e6, "v4l2_src_change_event_subscribe" },
	{ 0xea7c20ed, "v4l2_m2m_buf_remove" },
	{ 0x18af532b, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x84ea0f4d, "v4l2_fh_add" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb985482b, "v4l2_m2m_ctx_release" },
	{ 0x59e6a6c3, "v4l2_fh_del" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4481bf1e, "media_device_init" },
	{ 0x25e5c348, "mmal_vchi_buffer_cleanup" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcf0af84f, "media_device_unregister" },
	{ 0xab372da2, "video_ioctl2" },
	{ 0x604b91d8, "vb2_core_expbuf_dmabuf" },
	{ 0xb07f1848, "v4l2_m2m_job_finish" },
	{ 0x2cbed9df, "vchiq_mmal_port_parameter_get" },
	{ 0xd4fc93fc, "v4l2_fh_exit" },
	{ 0x91369769, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,bcm2835-mmal-vchiq,videodev,videobuf2-v4l2,videobuf2-common,mc,videobuf2-dma-contig");


MODULE_INFO(srcversion, "10F5FF3F09B29D1B9681089");
